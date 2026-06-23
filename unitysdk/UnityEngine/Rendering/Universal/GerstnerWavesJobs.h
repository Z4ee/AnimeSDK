#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Wave.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C4028C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_COMPLETEJOBS_OFFSET UNITYSDK_OFFSET(0x1C402C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C402D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_INIT_OFFSET UNITYSDK_OFFSET(0x1C402840)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_UPDATEHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1C402EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_UPDATESAMPLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1C402A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4030C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GerstnerWavesJobs_TypeDefinitionIndex = 26945;

	class GerstnerWavesJobs : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2Int>** StaticGet_Registry()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x21FD0);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Wave>* StaticGet__waveData()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Wave>*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6EC0);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__wavePos()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6ED0);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__positions()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6EE0);
		}
		static ::Unity::Jobs::JobHandle* StaticGet__waterHeightHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6EF0);
		}
		static ::System::Boolean* StaticGet__processing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F00);
		}
		static ::System::Boolean* StaticGet_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F01);
		}
		static ::System::Boolean* StaticGet__firstFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F02);
		}
		static ::System::Int32* StaticGet__waveCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F04);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet__waveNormal()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F08);
		}
		static ::System::Int32* StaticGet__positionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GerstnerWavesJobs_TypeDefinitionIndex)->GetStaticField(0x6F18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_INIT_OFFSET))();
		}

		static ::System::Void Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_CLEANUP_OFFSET))();
		}

		static ::System::Void UpdateSamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& samplePoints, ::System::Int32 guid)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_UPDATESAMPLEPOINTS_OFFSET))(samplePoints, guid);
		}

		static ::System::Void GetData(::System::Int32 guid, ::Il2CppArray<::UnityEngine::Vector3>*& outPos, ::Il2CppArray<::UnityEngine::Vector3>*& outNorm)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_GETDATA_OFFSET))(guid, outPos, outNorm);
		}

		static ::System::Void UpdateHeights()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_UPDATEHEIGHTS_OFFSET))();
		}

		static ::System::Void CompleteJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_COMPLETEJOBS_OFFSET))();
		}
	};
}
