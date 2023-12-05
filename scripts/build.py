import subprocess
import platform

def execute_command(command):
    try:
        if platform.system() == 'Windows':
            subprocess.run(command, shell=True, check=True)
        elif platform.system() == 'Linux':
            subprocess.run(command, shell=True, check=True)
        else:
            print("Unsupported operating system")
    except subprocess.CalledProcessError as e:
        print(f"Error executing command: {command}")
        print(f"Error message: {e}")

# Example usage
execute_command("echo Hello, world!")