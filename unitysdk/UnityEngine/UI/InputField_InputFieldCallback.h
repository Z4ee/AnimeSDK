#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI { class InputField; }

#define UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D313130)
#define UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D313160)
#define UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D312C30)
#define UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D312C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_InputFieldCallback_TypeDefinitionIndex = 18886;

	class InputField_InputFieldCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_INVOKE_OFFSET))(this, inputField);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::InputField* inputField, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::InputField*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_BEGININVOKE_OFFSET))(this, inputField, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPUTFIELDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
