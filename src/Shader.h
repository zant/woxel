#pragma once

#include <string>

class Shader {
private:
  unsigned int m_RendererID;

public:
  Shader(){};
  ~Shader(){};
  void bind() const;
  void unbind() const;
  static void loadShader(std::string file);
};