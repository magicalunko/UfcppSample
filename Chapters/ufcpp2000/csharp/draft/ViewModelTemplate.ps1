param($def)

@"
using System;
using System.Windows.Input;
using System.ComponentModel;

namespace $($def.Namespace)
{
    /// <summary>
    /// $($def.Description) の ViewModel
    /// </summary>
    public partial class $($def.Class) : INotifyPropertyChanged
    {
"@

foreach ($p in $def.Properties)
{
    $Type = $p.Type
    $Name = $p.Name
    $Description = $p.Description
@"
        private $Type _$Name;

        /// <summary>
        /// $Description
        /// </summary>
        public $Type $Name
        {
            get { return _$Name; }
            set
            {
                if (_$Name != value)
                {
                    _$Name = value;
                    RaisePropertyChanged("$Name");
                }
            }
        }

"@
}

@"
        #region INotifyPropertyChanged Members

        public event PropertyChangedEventHandler PropertyChanged;

        void RaisePropertyChanged(string propertyName)
        {
            var f = this.PropertyChanged;
            if (f != null)
                f(this, new PropertyChangedEventArgs(propertyName));
        }

        #endregion
    }
}
"@
