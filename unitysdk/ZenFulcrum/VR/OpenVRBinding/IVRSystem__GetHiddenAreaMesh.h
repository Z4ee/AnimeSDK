#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EHiddenAreaMeshType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HiddenAreaMesh_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B525B90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B525C20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B525B60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525AF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetHiddenAreaMesh_TypeDefinitionIndex = 35984;

	class IVRSystem__GetHiddenAreaMesh : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETHIDDENAREAMESH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
