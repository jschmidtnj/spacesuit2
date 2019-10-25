# NASA SUITS Proposal

## installation

### debian-based

1. `sudo apt-get install texlive-latex-extra -y`
2. `sudo apt-get install texlive-bibtex-extra biber -y`

### arch

1. `yay -Sy texlive-core`
2. `yay -Sy biber`

## Compile

1. `pdflatex main`
2. `biber main`
3. `pdflatex main`
