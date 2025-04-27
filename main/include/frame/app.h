#include <gtkmm.h>

class App : public Gtk::Window
{
  public:
    App();
    virtual ~App();


  protected:
    
  void on_button_start_clicked();
  void on_button_options_clicked();

  //Buttons:
  Gtk:: Button button_start, button_options;
  
  //Frame:
  Gtk:: Frame frame_start, frame.options;

};

App::App() 
{
   set_title("Search-Data");
   set_default_size(800, 600);


        // Carrega o CSS
        auto css_provider = Gtk::CssProvider::create();
        try {
            css_provider->load_from_data(
                "window {"
                "   background-image: url('files/background/home/quantum.jpg');"
                "   background-size: cover;"
                "}"
            );
        } catch(const Gtk::CssProviderError& e) {
            std::cerr << "Erro no CSS: " << e.what() << std::endl;
        }
        
        // Aplica o CSS
        get_style_context()->add_provider_for_screen(
            Gdk::Screen::get_default(),
            css_provider,
            GTK_STYLE_PROVIDER_PRIORITY_APPLICATION
        );
        
        // Adiciona widgets de login (como no exemplo anterior)
        auto login_box = Gtk::make_managed<Gtk::Box>(Gtk::ORIENTATION_VERTICAL, 10);
        // ... (adicionar entries, botões, etc)
        
        add(*login_box);
        show_all_children();
};


//Frame:
App:: App() 
: button_start("Start"),
: button_options("Options")
{
   

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

void App::on_button_start_clicked()
{
  App::App
}

void App::on_button_options_clicked()
{
  
}
