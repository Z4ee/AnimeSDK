#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_GUI_WINDOWFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAC8A30)
#define UNITYENGINE_GUI_WINDOWFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAC8A80)
#define UNITYENGINE_GUI_WINDOWFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAC8610)
#define UNITYENGINE_GUI_WINDOWFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC89C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_WindowFunction_TypeDefinitionIndex = 5160;

	class GUI_WindowFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_WINDOWFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
