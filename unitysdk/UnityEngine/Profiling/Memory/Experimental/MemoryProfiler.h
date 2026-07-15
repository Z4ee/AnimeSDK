#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Profiling/Experimental/DebugScreenCapture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Profiling::Memory::Experimental { class MetaData; }

#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D121F30)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET UNITYSDK_OFFSET(0x1D121AA0)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET UNITYSDK_OFFSET(0x1D121F70)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1D121E40)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1D121EB0)

namespace UnityEngine::Profiling::Memory::Experimental
{
	inline static constexpr unsigned int MemoryProfiler_TypeDefinitionIndex = 4508;

	class MemoryProfiler : public ::System::Object
	{
	public:
		static ::System::Action_3<::System::String*, ::System::Boolean, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>** StaticGet_m_SaveScreenshotToDisk()
		{
			return (::System::Action_3<::System::String*, ::System::Boolean, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x38B30);
		}
		static ::System::Action_2<::System::String*, ::System::Boolean>** StaticGet_m_SnapshotFinished()
		{
			return (::System::Action_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x38B38);
		}
		static ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>** StaticGet_createMetaData()
		{
			return (::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x38B40);
		}

		static ::Il2CppArray<::System::Byte>* PrepareMetadata()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET))();
		}

		static ::System::Int32 WriteIntToByteArray(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 WriteStringToByteArray(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FinalizeSnapshot(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Void SaveScreenshotToDisk(::System::String* a1, ::System::Boolean a2, ::System::IntPtr a3, ::System::Int32 a4, ::UnityEngine::TextureFormat a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::IntPtr, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
