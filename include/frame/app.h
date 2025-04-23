#include <gtkmm.h>

class App : public Gtk::Window
{
  public:
    App();

  protected:
    
  void on_button_clicked();

  Gtk:: Button b_search;  

};

App:: App()
{
  set_title("Basic application");
  set_default_size(800, 600);


}


//
App:: App()
: b_search("Search")
{

    b_search.set_margin(10);

    // When the button receives the "clicked" signal, it will call the
    // on_button_clicked() method defined below.
    b_search.signal_clicked().connect(sigc::mem_fun(*this, &App::on_button_clicked));
  
    // This packs the button into the Window (a container).
    set_child(b_search);
  
}