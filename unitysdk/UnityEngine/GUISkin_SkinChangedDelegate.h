#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAD7700)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAD7730)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAD7530)
#define UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD7690)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISkin_SkinChangedDelegate_TypeDefinitionIndex = 5173;

	class GUISkin_SkinChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SKINCHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
