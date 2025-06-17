// src/IpGeoLocator.h
#ifndef IP_GEO_LOCATOR_H
#define IP_GEO_LOCATOR_H // <-- Cette ligne a été corrigée ici

#include <string>
#include <memory> // Pour std::unique_ptr
#include "HttpRequest.h"     // Pour effectuer les requêtes HTTP
#include "GeoLocationData.h" // Pour stocker les résultats de géolocalisation
#include "nlohmann/json.hpp" // Pour manipuler le JSON

// Un alias pour simplifier l'utilisation de la bibliothèque JSON
using json = nlohmann::json;

class IpGeoLocator {
public:
    // Constructeur : initialise avec une référence à une instance de HttpRequest
    // Nous passons HttpRequest par référence pour pouvoir potentiellement
    // réutiliser la même instance de HttpRequest ou en injecter une configurée.
    IpGeoLocator(HttpRequest& httpRequest);

    // Méthode principale pour géolocaliser une IP donnée
    // Retourne un objet GeoLocationData contenant les informations.
    GeoLocationData locate(const std::string& ipAddress);

    // Méthode pour obtenir l'IP publique de la machine locale
    std::string getPublicIp();

    // Méthodes pour gérer les erreurs
    std::string getLastError() const;
    bool hasError() const;

private:
    // Référence à l'objet HttpRequest pour effectuer les requêtes
    HttpRequest& httpRequest;
    std::string lastErrorMsg; // Pour stocker le dernier message d'erreur

    // Méthode privée pour parser la réponse JSON et remplir GeoLocationData
    GeoLocationData parseJsonResponse(const std::string& jsonResponse, const std::string& targetIp);

    // Constante pour l'URL de l'API de géolocalisation
    static const std::string GEO_API_URL;
    // Constante pour l'URL de détection d'IP publique
    static const std::string PUBLIC_IP_DETECTOR_URL;
};

#endif // IP_GEO_LOCATOR_H
