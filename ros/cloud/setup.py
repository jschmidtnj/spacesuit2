## ! DO NOT MANUALLY INVOKE THIS setup.py, USE CATKIN INSTEAD

from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

def read(fname):
    return open(fname).read()

# fetch values from package.xml
setup_args = generate_distutils_setup(
    packages=['spacesuit_data_collector', 'spacesuit_data_storage'],
    package_dir={'': 'src'},
    platforms=['ROS'],
    long_description=read('../../docs/description.md')
)

setup(**setup_args)
