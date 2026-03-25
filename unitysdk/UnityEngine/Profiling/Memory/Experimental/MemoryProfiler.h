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

#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18A2E4F0)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET UNITYSDK_OFFSET(0x18A2E0D0)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET UNITYSDK_OFFSET(0x18A2E570)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x18A2E3B0)
#define UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x18A2E460)

namespace UnityEngine::Profiling::Memory::Experimental
{
	inline static constexpr unsigned int MemoryProfiler_TypeDefinitionIndex = 4327;

	class MemoryProfiler : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>** StaticGet_createMetaData()
		{
			return (::System::Action_1<::UnityEngine::Profiling::Memory::Experimental::MetaData*>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x12ED0);
		}
		static ::System::Action_2<::System::String*, ::System::Boolean>** StaticGet_m_SnapshotFinished()
		{
			return (::System::Action_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x12ED8);
		}
		static ::System::Action_3<::System::String*, ::System::Boolean, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>** StaticGet_m_SaveScreenshotToDisk()
		{
			return (::System::Action_3<::System::String*, ::System::Boolean, ::UnityEngine::Profiling::Experimental::DebugScreenCapture>**)Il2CppClass::FromTypeDefinitionIndex(MemoryProfiler_TypeDefinitionIndex)->GetStaticField(0x12EE0);
		}

		static ::Il2CppArray<::System::Byte>* PrepareMetadata()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_PREPAREMETADATA_OFFSET))();
		}

		static ::System::Int32 WriteIntToByteArray(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITEINTTOBYTEARRAY_OFFSET))(array, offset, value);
		}

		static ::System::Int32 WriteStringToByteArray(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::String* value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_WRITESTRINGTOBYTEARRAY_OFFSET))(array, offset, value);
		}

		static ::System::Void FinalizeSnapshot(::System::String* path, ::System::Boolean result)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_FINALIZESNAPSHOT_OFFSET))(path, result);
		}

		static ::System::Void SaveScreenshotToDisk(::System::String* path, ::System::Boolean result, ::System::IntPtr pixelsPtr, ::System::Int32 pixelsCount, ::UnityEngine::TextureFormat format, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::IntPtr, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_MEMORY_EXPERIMENTAL_MEMORYPROFILER_SAVESCREENSHOTTODISK_OFFSET))(path, result, pixelsPtr, pixelsCount, format, width, height);
		}
	};
}
