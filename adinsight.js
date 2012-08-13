(function($){

  Drupal.behaviors.adInsight = {
    attach: function(context, settings) {
      adiInit = settings.adinsight['id'];

      (function() {
        var adiSrc = document.createElement("script");
        adiSrc.type = "text/javascript";
        adiSrc.async = true;
        adiSrc.src = ("https:" == document.location.protocol ? "https://"
          : "http://") + "static.adinsight.com/static/scripts/adiTrack.min.js";
        var s = document.getElementsByTagName("script")[0];
        s.parentNode.insertBefore(adiSrc, s);
      })();
    }
  }
  
})(jQuery);