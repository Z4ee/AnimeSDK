#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70BA80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70BAD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B790)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70B770)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__FreeTextureD3D11_TypeDefinitionIndex = 35909;

	class IVRRenderModels__FreeTextureD3D11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pD3D11Texture2D)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_INVOKE_OFFSET))(this, pD3D11Texture2D);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_BEGININVOKE_OFFSET))(this, pD3D11Texture2D, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURED3D11_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
