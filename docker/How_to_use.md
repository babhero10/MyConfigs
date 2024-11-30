# Docker file

## Setup neovim (Optional)
If you have custom neovim config you want to add make symlink/copy to the folder usually `~/.config/nvim`
```
ln -s ~/.config/nvim /docker-folder-path/nvim-config
```
```
cp -R ~/.config/nvim /docker-folder-path/nvim-config
```
## Build the docker image
```
docker-compose build
```

## Run the container
```
docker-compose up
```
