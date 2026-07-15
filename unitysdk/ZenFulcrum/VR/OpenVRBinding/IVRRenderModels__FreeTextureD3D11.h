#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22D730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22D780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22D720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22D6B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__FreeTextureD3D11_TypeDefinitionIndex = 36991;

	class IVRRenderModels__FreeTextureD3D11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
