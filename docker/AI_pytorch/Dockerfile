# Use the latest PyTorch image with CUDA support as a base
FROM pytorch/pytorch:latest

# Update and install core dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    git wget curl \
    build-essential cmake \
    zsh \
    vim \
    libgl1-mesa-glx libegl1-mesa \
    libxrandr2 libxinerama1 libxcursor1 \
    libusb-1.0-0 \
    fuse \
    xclip \
    unzip \
    python3-pip python3-dev build-essential libgtk-3-dev libwebkit2gtk-4.0-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Download and install Neovim AppImage
RUN wget https://github.com/neovim/neovim/releases/download/stable/nvim.appimage -O /usr/local/bin/nvim && \
    chmod +x /usr/local/bin/nvim

# Install Python libraries
RUN pip install -U --no-cache-dir \
    numpy matplotlib opencv-python-headless \
    jupyter notebook \
    open3d vtk pyvista \
    torch torchvision torchaudio \
    wxpython vtk pandas networkx \
    pygeometry \
    scipy librosa  # Added libraries for signal processing

# Set up Jupyter Notebook
RUN mkdir -p /workspace && \
    jupyter notebook --generate-config && \
    echo "c.NotebookApp.ip = '*'" >> ~/.jupyter/jupyter_notebook_config.py && \
    echo "c.NotebookApp.open_browser = False" >> ~/.jupyter/jupyter_notebook_config.py && \
    echo "c.NotebookApp.port = 8888" >> ~/.jupyter/jupyter_notebook_config.py

# Install Oh-My-Zsh and Zsh plugins
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" "" --unattended && \
    git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/themes/powerlevel10k && \
    git clone https://github.com/zsh-users/zsh-syntax-highlighting.git ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-syntax-highlighting && \
    git clone https://github.com/zsh-users/zsh-autosuggestions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions && \
    git clone https://github.com/zsh-users/zsh-completions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-completions

# Set working directory
WORKDIR /workspace

# Expose default Jupyter Notebook port
EXPOSE 8888

# Default command
CMD ["/bin/zsh"]

