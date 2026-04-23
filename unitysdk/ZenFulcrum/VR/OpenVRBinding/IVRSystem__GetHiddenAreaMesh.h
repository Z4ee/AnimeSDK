#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EHiddenAreaMeshType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HiddenAreaMesh_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71DDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71DE80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71D9C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71D9A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetHiddenAreaMesh_TypeDefinitionIndex = 35684;

	class IVRSystem__GetHiddenAreaMesh : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType type)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_INVOKE_OFFSET))(this, eEye, type);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_BEGININVOKE_OFFSET))(this, eEye, type, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
