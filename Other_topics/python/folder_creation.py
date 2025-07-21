import os

def create_folder_structure(base_path, structure):
    for folder, subfolders in structure.items():
        folder_path = os.path.join(base_path, folder)
        os.makedirs(folder_path, exist_ok=True)
        if isinstance(subfolders, dict):
            create_folder_structure(folder_path, subfolders)

# Define your folder structure here
folder_structure = {
    'PRG_': {
        'BH': {
            'BH_out': {},
        },
        'BV': {
            'BV_out': {},
        },
        'FH': {
            'FH_out': {},    
        }
    }
}

# Set the base path where you want to create the folder structure
base_path = os.getcwd()

create_folder_structure(base_path, folder_structure)