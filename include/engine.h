#ifndef EDGE_ENGINE_H
#define EDGE_ENGINE_H

/*!
 * a facade class for interacting with EDGE within simulations
 */
class Engine {
public:
  Engine();

  ~Engine();

  void advance_by();

  void advance_to();

  void set_hdf5_io();

  void log();

private:
  void advance();
};



#endif //EDGE_ENGINE_H
