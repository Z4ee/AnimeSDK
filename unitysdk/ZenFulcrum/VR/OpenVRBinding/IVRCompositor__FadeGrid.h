#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAE690)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAE710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CAE320)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAE300)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__FadeGrid_TypeDefinitionIndex = 30071;

	class IVRCompositor__FadeGrid : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single fSeconds, ::System::Boolean bFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_INVOKE_OFFSET))(this, fSeconds, bFadeIn);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single fSeconds, ::System::Boolean bFadeIn, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_BEGININVOKE_OFFSET))(this, fSeconds, bFadeIn, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
