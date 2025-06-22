# Bienvenue !

Nous sommes ravis que tu souhaites contribuer au projet ip-nose. Que tu veuilles signaler un bug, suggérer une nouvelle fonctionnalité ou soumettre du code, toutes les contributions sont les bienvenues et appréciées.

Prends un moment pour lire les lignes directrices suivantes avant de soumettre ta contribution.

## Table des matières
- [Code de Conduite](#code-de-conduite)
- [Comment Contribuer](#comment-contribuer)
  - [Signaler un Bug](#signaler-un-bug)
  - [Suggérer une Fonctionnalité](#suggérer-une-fonctionnalité)
  - [Soumettre une Pull Request](#soumettre-une-pull-request)
- [Style de Code](#style-de-code)
- [Tests](#tests)
- [Licence](#licence)
- [Contact](#contact)

## Code de Conduite

Nous nous engageons à faire de la participation à ce projet une expérience sans harcèlement pour tout le monde. En participant, tu es censé respecter le [Code de Conduite](CODE_OF_CONDUCT.md). Si tu n'as pas encore créé ce fichier, tu peux t'inspirer du [Contributor Covenant](https://www.contributor-covenant.org/).

## Comment Contribuer

### Signaler un Bug

Si tu trouves un bug dans ip-nose, vérifie d'abord si le bug a déjà été signalé dans les [Issues](https://github.com/Karim93160/ip-nose/issues) du dépôt.

Si ce n'est pas le cas, ouvre une nouvelle issue et inclus autant de détails que possible :
- Une description claire et concise du bug
- Les étapes pour reproduire le comportement inattendu
- Le comportement attendu
- Les versions de ip-nose et de ton environnement (Python, OS, etc.) si pertinent
- Toute trace d'erreur ou message d'erreur

### Suggérer une Fonctionnalité

Tu as une idée pour améliorer ip-nose ? Nous aimerions l'entendre ! Ouvre une nouvelle Issue et décris ta suggestion :
- Une description claire et concise de la fonctionnalité
- Pourquoi cette fonctionnalité serait utile pour le projet et ses utilisateurs
- Des exemples d'utilisation si possible

### Soumettre une Pull Request

1. Fork le dépôt ip-nose sur ton compte GitHub depuis [https://github.com/Karim93160/ip-nose](https://github.com/Karim93160/ip-nose)
2. Clone ton fork localement :
   ```bash
   git clone https://github.com/TaNomUtilisateur/ip-nose.git
   cd ip-nose
   ```
3. Crée une nouvelle branche pour ta fonctionnalité ou ton correctif :
   ```bash
   git checkout -b ma-super-fonctionnalite
   ```
   (Choisis un nom de branche significatif, par exemple `fix/bug-de-calcul-ip` ou `feat/support-ipv6`)
4. Implémente tes modifications
5. Teste tes modifications pour t'assurer qu'elles fonctionnent comme prévu et qu'elles n'introduisent pas de régressions. Vois la section [Tests](#tests) pour plus de détails
6. Commit tes modifications avec un message de commit clair et descriptif. Utilise des préfixes comme `feat:`, `fix:`, `docs:`, `style:`, `refactor:`, `test:`, `chore:` selon le type de modification :
   ```bash
   git commit -m "feat: ajoute le support pour les adresses IPv6"
   ```
7. Push ta branche vers ton fork sur GitHub :
   ```bash
   git push origin ma-super-fonctionnalite
   ```
8. Ouvre une Pull Request (PR) depuis ta branche sur GitHub vers la branche main du dépôt original `Karim93160/ip-nose`
   - Décris clairement les modifications que tu as apportées
   - Référence les issues pertinentes que ta PR résout (par exemple, "Closes #123")
   - Sois prêt à répondre aux commentaires et à apporter des ajustements si nécessaire

## Style de Code

- Veuillez suivre le style de code [PEP 8](https://www.python.org/dev/peps/pep-0008/) pour le code Python
- Utilise des docstrings pour documenter tes fonctions, classes et modules
- Préfère des noms de variables et de fonctions clairs et explicites

## Tests

Nous encourageons l'écriture de tests pour toute nouvelle fonctionnalité ou correction de bug. Si le projet utilise un framework de test (par exemple, pytest), familiarise-toi avec lui.

- Exécute les tests existants avant de soumettre ta PR pour t'assurer que tes modifications n'ont rien cassé :
  ```bash
  # Exemple si pytest est utilisé
  pytest
  ```
- Ajoute des tests pour ta nouvelle fonctionnalité ou pour reproduire le bug que tu corriges

## Licence

En contribuant à ip-nose, tu acceptes que tes contributions soient sous la même licence que le projet lui-même. Veuillez consulter le fichier [LICENSE](LICENSE) pour plus de détails.

## Contact

Pour toute question ou information supplémentaire concernant les contributions, tu peux me contacter à l'adresse suivante : [karim9316077185@gmail.com](mailto:karim9316077185@gmail.com).

---

N'oublie pas de créer un fichier `CODE_OF_CONDUCT.md` à la racine de ton dépôt, car il est référencé dans ce CONTRIBUTING.md. Tu peux trouver des exemples en ligne, comme celui du [Contributor Covenant](https://www.contributor-covenant.org/).

Bonne chance avec ton projet ip-nose !
