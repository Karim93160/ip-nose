# Welcome!

We're excited you want to contribute to the ip-nose project. Whether you want to report a bug, suggest a new feature, or submit code, all contributions are welcome and appreciated.

Please take a moment to read the following guidelines before submitting your contribution.

## Table of Contents
- [Code of Conduct](#code-of-conduct)
- [How to Contribute](#how-to-contribute)
  - [Reporting a Bug](#reporting-a-bug)
  - [Suggesting a Feature](#suggesting-a-feature)
  - [Submitting a Pull Request](#submitting-a-pull-request)
- [Code Style](#code-style)
- [Tests](#tests)
- [License](#license)
- [Contact](#contact)

## Code of Conduct

We are committed to making participation in this project a harassment-free experience for everyone. By participating, you are expected to adhere to our [Code of Conduct](CODE_OF_CONDUCT.md). If you haven't created this file yet, you can use the [Contributor Covenant](https://www.contributor-covenant.org/) as inspiration.

## How to Contribute

### Reporting a Bug

If you find a bug in ip-nose, first check if the bug has already been reported in the repository's [Issues](https://github.com/Karim93160/ip-nose/issues).

If not, open a new issue and include as many details as possible:
- A clear and concise description of the bug
- Steps to reproduce the unexpected behavior
- Expected behavior
- ip-nose version and your environment details (Python version, OS, etc.) if relevant
- Any error traces or error messages

### Suggesting a Feature

Have an idea to improve ip-nose? We'd love to hear it! Open a new Issue and describe your suggestion:
- A clear and concise description of the feature
- Why this feature would be useful for the project and its users
- Usage examples if possible

### Submitting a Pull Request

1. Fork the ip-nose repository on your GitHub account from [https://github.com/Karim93160/ip-nose](https://github.com/Karim93160/ip-nose)
2. Clone your fork locally:
   ```bash
   git clone https://github.com/YourUsername/ip-nose.git
   cd ip-nose
   ```
3. Create a new branch for your feature or fix:
   ```bash
   git checkout -b my-awesome-feature
   ```
   (Choose a meaningful branch name, e.g., `fix/ip-calculation-bug` or `feat/ipv6-support`)
4. Implement your changes
5. Test your changes to ensure they work as expected and don't introduce regressions. See the [Tests](#tests) section for more details
6. Commit your changes with a clear, descriptive commit message. Use prefixes like `feat:`, `fix:`, `docs:`, `style:`, `refactor:`, `test:`, `chore:` according to the change type:
   ```bash
   git commit -m "feat: add support for IPv6 addresses"
   ```
7. Push your branch to your fork on GitHub:
   ```bash
   git push origin my-awesome-feature
   ```
8. Open a Pull Request (PR) from your branch on GitHub to the main branch of the original repository `Karim93160/ip-nose`
   - Clearly describe the changes you've made
   - Reference any relevant issues your PR resolves (e.g., "Closes #123")
   - Be prepared to respond to feedback and make adjustments if needed

## Code Style

- Please follow [PEP 8](https://www.python.org/dev/peps/pep-0008/) style guidelines for Python code
- Use docstrings to document your functions, classes, and modules
- Prefer clear and explicit names for variables and functions

## Tests

We encourage writing tests for all new features or bug fixes. If the project uses a testing framework (e.g., pytest), please familiarize yourself with it.

- Run existing tests before submitting your PR to ensure your changes don't break anything:
  ```bash
  # Example if using pytest
  pytest
  ```
- Add tests for your new feature or to reproduce the bug you're fixing

## License

By contributing to ip-nose, you agree that your contributions will be licensed under the same license as the project itself. Please see the [LICENSE](LICENSE) file for details.

## Contact

For any questions or additional information about contributions, you can contact me at: [karim9316077185@gmail.com](mailto:karim9316077185@gmail.com).
