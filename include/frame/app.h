#include <gtkmm.h>

class App : public Gtk::Window
{
  public:
    App();

  protected:
    
  void on_button_start_clicked();
  voud on_button_options_clicked();

  Gtk:: Button button_start, button_options;  
};


//
App:: App() 
: button_start("Start"),
: button_options("Options")
{
    set_title("Basic application");
    set_default_size(800, 600);

    //layout do button_start//
    button_start.set_margin(10);
    button_options.set_margin(10);
   
    // When the button receives the "clicked" signal, it will call the
    // on_button_clicked() method defined below.
    button_start.signal_clicked().connect(sigc::mem_fun(*this, &App::on_button_start_clicked));
    button_options.signal_clicked().connect(sigc::mem_fun(*this, &App::on_button_options_clicked));


    
  
    // This packs the button into the Window (a container).
    set_child(button_start);
    set_child(button_options);
  
}

void Frame::on_button_start_clicked()
{
  
}

void Frame::on_button_options_clicked()
{
  
}
