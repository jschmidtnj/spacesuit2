#!/bin/sh
set -e
if (( $EUID != 0 )); then
  echo "Please run as root"
  exit
fi
docker stop $(docker ps -aq) || true
docker rm $(docker ps -aq) || true
docker rmi $(docker images -q) || true
docker system prune -a || true
systemctl stop mongodb || true
