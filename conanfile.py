from conans import ConanFile, tools, CMake
import os

def get_version():
    major_version = '0'
    if os.environ.get("PACKAGE_VERSION", None):
        return f"{major_version}.{os.environ['PACKAGE_VERSION']}"
    return major_version


class ShieldConan(ConanFile):
    name = "sw__shield"
    version = get_version()
    topics = ("shield", "utility")
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = {"shared": False}
    requires = []
    generators = "cmake"
    exports_sources = "*"
        
    def package(self):
        self.copy("*", src="include", dst="include")
        self.copy("*.cmake", src="cmake", dst="cmake")


    def package_info(self):
        self.info.header_only()
