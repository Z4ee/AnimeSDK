#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B760)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B420)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70B400)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__FreeTexture_TypeDefinitionIndex = 35906;

	class IVRRenderModels__FreeTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pTexture)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_INVOKE_OFFSET))(this, pTexture);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pTexture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_BEGININVOKE_OFFSET))(this, pTexture, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREETEXTURE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
