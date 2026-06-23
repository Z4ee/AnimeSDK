#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Threading::Tasks { class Task; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B07D5F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07D630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__DECOMPRESSASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B07D640)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c_TypeDefinitionIndex = 27324;

	class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*, ::System::Threading::Tasks::Task*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*, ::System::Threading::Tasks::Task*>**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c_TypeDefinitionIndex)->GetStaticField(0x20710);
		}
		static ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedDataManager_AsyncDecompressLyraSectorJobsData___c_TypeDefinitionIndex)->GetStaticField(0x20718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* _DecompressAsync_b__1_0(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* data)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA___C__DECOMPRESSASYNC_B__1_0_OFFSET))(this, data);
		}
	};
}
