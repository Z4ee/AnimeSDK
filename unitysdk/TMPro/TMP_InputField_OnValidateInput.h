#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x171C2060)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x171C20E0)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x171B71C0)
#define TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x171C1FE0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_OnValidateInput_TypeDefinitionIndex = 41795;

	class TMP_InputField_OnValidateInput : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Char Invoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Char EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TMPRO_TMP_INPUTFIELD_ONVALIDATEINPUT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
