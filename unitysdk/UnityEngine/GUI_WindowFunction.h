#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_GUI_WINDOWFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E4241E0)
#define UNITYENGINE_GUI_WINDOWFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E424250)
#define UNITYENGINE_GUI_WINDOWFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E4238F0)
#define UNITYENGINE_GUI_WINDOWFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4241C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_WindowFunction_TypeDefinitionIndex = 6404;

	class GUI_WindowFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_INVOKE_OFFSET))(this, id);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_BEGININVOKE_OFFSET))(this, id, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
