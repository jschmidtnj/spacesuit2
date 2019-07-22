## ! DO NOT MANUALLY INVOKE THIS setup.py, USE CATKIN INSTEAD

from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

def read(fname):
    return open(fname).read()

# fetch values from package.xml
setup_args = generate_distutils_setup(
    packages=['suit'],
    package_dir={'': 'src'},
    platforms=['ROS/Turtlebot3-Waffle'],
    long_description=read('../doc/DESCRIPTION.txt')
)

setup(**setup_args)
