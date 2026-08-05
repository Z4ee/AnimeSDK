#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/Struct.h"
#include "unitysdk/UnrealTypes/StructFlags.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class Object; }
namespace UnrealTypes { class ICppStructOps; }

#define UNREALTYPES_SCRIPTSTRUCT_CLEARSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E38B090)
#define UNREALTYPES_SCRIPTSTRUCT_COPYSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E38ACA0)
#define UNREALTYPES_SCRIPTSTRUCT_DESTROYSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E38A980)
#define UNREALTYPES_SCRIPTSTRUCT_GET_STRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1E38AC50)
#define UNREALTYPES_SCRIPTSTRUCT_INITIALIZESTRUCT_OFFSET UNITYSDK_OFFSET(0x1E38B4B0)
#define UNREALTYPES_SCRIPTSTRUCT_PREPARECPPSTRUCTOPS_OFFSET UNITYSDK_OFFSET(0x1E383340)
#define UNREALTYPES_SCRIPTSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E383250)

namespace UnrealTypes
{
	inline static constexpr unsigned int ScriptStruct_TypeDefinitionIndex = 28322;

	class ScriptStruct : public ::UnrealTypes::Struct
	{
	public:
		::System::Object* VirtualProxy; // 0x70
		::UnrealTypes::ICppStructOps* CppStructOps; // 0x78
		::UnrealTypes::StructFlags StructFlags; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT__CTOR_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_StructHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_GET_STRUCTHANDLE_OFFSET))(this);
		}

		::System::Void PrepareCppStructOps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_PREPARECPPSTRUCTOPS_OFFSET))(this);
		}

		::System::Void InitializeStruct(::System::Void* dest, ::Unity::Collections::Allocator allocator, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Unity::Collections::Allocator, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_INITIALIZESTRUCT_OFFSET))(this, dest, allocator, arrayDim);
		}

		::System::Void DestroyStruct(::System::Void* dest, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_DESTROYSTRUCT_OFFSET))(this, dest, arrayDim);
		}

		::System::Void CopyScriptStruct(::System::Void* dest, ::System::Void* src, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_COPYSCRIPTSTRUCT_OFFSET))(this, dest, src, arrayDim);
		}

		::System::Void ClearScriptStruct(::System::Void* dest, ::Unity::Collections::Allocator allocator, ::System::Int32 arrayDim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Unity::Collections::Allocator, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTSTRUCT_CLEARSCRIPTSTRUCT_OFFSET))(this, dest, allocator, arrayDim);
		}
	};
}
