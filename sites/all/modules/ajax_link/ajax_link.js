(function($){
  $.fn.ajax_link =function() {
    $('#ajax-link').hide();
    setTimeout(function(){
      $('#ajax-display').fadeOut().html("GIVE NIC A JOB!").show();
      $('#ajax-link').fadeIn();
    }, 5000)
  }
})(jQuery);
