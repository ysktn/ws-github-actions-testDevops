# Introduction à la CI/CD avec GitHub Actions

Cette repository contient tous les fichiers nécessaires pour suivre le workshop "Introduction à la CI/CD avec GitHub Actions". Dans ce workshop, nous verrons comment mettre en place une pipeline de CI/CD avec GitHub Actions et comment fonctionne cette technologie.

## Prérequis

Afin de suivre ce workshop, vous aurez besoin de fork cette repository GitHub sur votre compte personnel. Pour ce faire, cliquez sur le bouton "Fork" en haut à droite de cette page.

## Aide pour le workshop

Afin de faire un report du coding-style, voici le script à utiliser (copiez-collez le au moment où on en aura besoin)

```bash
curl https://raw.githubusercontent.com/Epitech/coding-style-checker/main/coding-style.sh -o /tmp/coding-style.sh; chmod +x /tmp/coding-style.sh
```

```bash
NB_ERROR=$(cat coding-style-reports.log | wc -l)
if [ $NB_ERROR -gt 0 ]; then
    ERRORS=$(cat coding-style-reports.log);
    echo "Banana found $NB_ERROR error(s)"
    echo "$ERRORS"
    exit 1
fi
    echo "Everything is good ! Keep on coding !"
    exit 0
```
