# Use the latest PyTorch image with CUDA support as a base
FROM pytorch/pytorch:latest

# Update and install core dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    python3.9 python3.9-dev python3-pip \
    vim neovim vi \
    git wget curl \
    build-essential cmake \
    libgl1-mesa-glx libegl1-mesa \
    libxrandr2 libxinerama1 libxcursor1 \
    libusb-1.0-0 \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Install Python libraries
RUN pip install --no-cache-dir \
    numpy matplotlib opencv-python-headless \
    jupyter notebook \
    open3d vtk pyvista \
    torch torchvision torchaudio \
    pygeometry

# Set up Jupyter Notebook
RUN mkdir -p /workspace && \
    jupyter notebook --generate-config && \
    echo "c.NotebookApp.ip = '*'" >> ~/.jupyter/jupyter_notebook_config.py && \
    echo "c.NotebookApp.open_browser = False" >> ~/.jupyter/jupyter_notebook_config.py && \
    echo "c.NotebookApp.port = 8888" >> ~/.jupyter/jupyter_notebook_config.py

# Set working directory
WORKDIR /workspace

# Expose default Jupyter Notebook port
EXPOSE 8888

# Default command
CMD ["/bin/bash"]

