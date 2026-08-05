#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class CameraCacheData; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA87850)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_GETCACHCEDATA_OFFSET UNITYSDK_OFFSET(0x1EA87A50)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA87640)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_TRIMINVALIDDATA_OFFSET UNITYSDK_OFFSET(0x1EA87BE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA87770)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CameraCacheDataManager_TypeDefinitionIndex = 6020;

	class CameraCacheDataManager : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::CameraCacheDataManager** StaticGet_Instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::CameraCacheDataManager**)Il2CppClass::FromTypeDefinitionIndex(CameraCacheDataManager_TypeDefinitionIndex)->GetStaticField(0x4EF0);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraCacheData*>* m_CacheData; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::CameraCacheData*>>* tmpToDelete; // 0x18
		::System::Int32 skipCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_INITIALIZE_OFFSET))();
		}

		static ::System::Void Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_CLEANUP_OFFSET))();
		}

		::UnityEngine::NAPRenderPipeline0::CameraCacheData* GetCachceData(::UnityEngine::Camera* key)
		{
			return ((::UnityEngine::NAPRenderPipeline0::CameraCacheData*(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_GETCACHCEDATA_OFFSET))(this, key);
		}

		::System::Void TrimInvalidData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERACACHEDATAMANAGER_TRIMINVALIDDATA_OFFSET))(this);
		}
	};
}
