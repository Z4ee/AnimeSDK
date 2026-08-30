#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4A70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4B60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4A20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB49B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__FadeToColor_TypeDefinitionIndex = 37730;

	class IVRCompositor__FadeToColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADETOCOLOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
