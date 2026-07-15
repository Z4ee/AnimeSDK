#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B231600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B231630)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2315F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B231580)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetD3D9AdapterIndex_TypeDefinitionIndex = 36740;

	class IVRSystem__GetD3D9AdapterIndex : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETD3D9ADAPTERINDEX_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
