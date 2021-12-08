from setuptools import setup

package_name = 'warehouse_robot_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sam',
    maintainer_email='samuel.wiest@gmail.com',
    description='Package containing nodes and functionality for a robotic warehouse simulation',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #Entry point for the publisher
            'beacon = warehouse_robot_package.beacon:main',
            #Entry point for the subscriber
            'robot = warehouse_robot_package.robot:main',
        ],
    },
)
