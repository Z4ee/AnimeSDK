#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A3706B0)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A370730)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A363410)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A370690)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_OnValidateInput_TypeDefinitionIndex = 40153;

	class TMP_InputField_OnValidateInput : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT__CTOR_OFFSET))(this, object, method);
		}

		::System::Char Invoke(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_INVOKE_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_BEGININVOKE_OFFSET))(this, text, charIndex, addedChar, callback, object);
		}

		::System::Char EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Char(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
