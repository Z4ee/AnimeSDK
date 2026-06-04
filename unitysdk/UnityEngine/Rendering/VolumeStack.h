#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeStack_RuntimeTypeHandleComparer; }

#define UNITYENGINE_RENDERING_VOLUMESTACK_CHECKORUPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1B197260)
#define UNITYENGINE_RENDERING_VOLUMESTACK_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1B197280)
#define UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1943E0)
#define UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B194D90)
#define UNITYENGINE_RENDERING_VOLUMESTACK_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B197240)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET UNITYSDK_OFFSET(0x1B193750)
#define UNITYENGINE_RENDERING_VOLUMESTACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B197290)
#define UNITYENGINE_RENDERING_VOLUMESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B193160)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_TypeDefinitionIndex = 33860;

	class VolumeStack : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeStack_RuntimeTypeHandleComparer** StaticGet__typeHandleComparer()
		{
			return (::UnityEngine::Rendering::VolumeStack_RuntimeTypeHandleComparer**)Il2CppClass::FromTypeDefinitionIndex(VolumeStack_TypeDefinitionIndex)->GetStaticField(0x4BB50);
		}
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeComponent*>* components; // 0x10
		::System::Int32 _version; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK__CCTOR_OFFSET))();
		}

		::System::Void Reload(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RELOAD_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VolumeComponent* GetComponent(::System::RuntimeTypeHandle a1)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_GETCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_ISVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckOrUpdateVersion(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CHECKORUPDATEVERSION_OFFSET))(this, a1);
		}

		::System::Boolean CheckVersion(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_CHECKVERSION_OFFSET))(this, a1);
		}
	};
}
