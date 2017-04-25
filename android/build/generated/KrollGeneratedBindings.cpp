/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.mobidonia.tistartapp.TistartappModule.h"
#include "com.mobidonia.tistartapp.BannerProxy.h"


#line 14 "/Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 6, duplicates = 0 */

class TistartappBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TistartappBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TistartappBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 36,
      MAX_WORD_LENGTH = 41,
      MIN_HASH_VALUE = 36,
      MAX_HASH_VALUE = 41
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.mobidonia.tistartapp.BannerProxy",::com::mobidonia::tistartapp::tistartapp::BannerProxy::bindProxy,::com::mobidonia::tistartapp::tistartapp::BannerProxy::dispose},
      {""}, {""}, {""}, {""},
#line 17 "/Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.mobidonia.tistartapp.TistartappModule",::com::mobidonia::tistartapp::TistartappModule::bindProxy,::com::mobidonia::tistartapp::TistartappModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/Users/dimovdaniel/Documents/Titanium_Studio_Mobidonia/tistartapp/android/build/generated/KrollGeneratedBindings.gperf"

