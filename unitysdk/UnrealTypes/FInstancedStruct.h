#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FINSTANCEDSTRUCT_ASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCD10)
#define UNREALTYPES_FINSTANCEDSTRUCT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA20)
#define UNREALTYPES_FINSTANCEDSTRUCT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9DC920)
#define UNREALTYPES_FINSTANCEDSTRUCT_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1B2580)
#define UNREALTYPES_FINSTANCEDSTRUCT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DCB60)
#define UNREALTYPES_FINSTANCEDSTRUCT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DCA50)
#define UNREALTYPES_FINSTANCEDSTRUCT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DCE20)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DC770)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_SCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DCEF0)
#define UNREALTYPES_FINSTANCEDSTRUCT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DCF50)
#define UNREALTYPES_FINSTANCEDSTRUCT_INITIALIZEAS_1_OFFSET UNITYSDK_OFFSET(0x9DCD00)
#define UNREALTYPES_FINSTANCEDSTRUCT_INITIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9DCC90)
#define UNREALTYPES_FINSTANCEDSTRUCT_MAKEREADONLYVIEW_OFFSET UNITYSDK_OFFSET(0x9DCE00)
#define UNREALTYPES_FINSTANCEDSTRUCT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA30)
#define UNREALTYPES_FINSTANCEDSTRUCT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9DCBF0)
#define UNREALTYPES_FINSTANCEDSTRUCT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D1B13A0)
#define UNREALTYPES_FINSTANCEDSTRUCT_RESETSTRUCTDATA_OFFSET UNITYSDK_OFFSET(0x9DCC20)
#define UNREALTYPES_FINSTANCEDSTRUCT_RESET_OFFSET UNITYSDK_OFFSET(0x9DCA40)
#define UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_1_OFFSET UNITYSDK_OFFSET(0x9DCC10)
#define UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_OFFSET UNITYSDK_OFFSET(0x9DCC10)
#define UNREALTYPES_FINSTANCEDSTRUCT_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDSTRUCT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA20)
#define UNREALTYPES_FINSTANCEDSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B2660)
#define UNREALTYPES_FINSTANCEDSTRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9DCB50)
#define UNREALTYPES_FINSTANCEDSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DCAD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStruct_TypeDefinitionIndex = 27787;

	struct alignas(8) FInstancedStruct
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FInstancedStruct_TypeDefinitionIndex)->GetStaticField(0x22840);
		}
		::Unity::Collections::Allocator _allocator; // 0x10
		::System::Void* _structMemory; // 0x18
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> _scriptStruct; // 0x20

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT__CTOR_OFFSET))(this, allocator);
		}

		::System::Void _ctor_1(::Unity::Collections::Allocator allocator, ::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT__CTOR_1_OFFSET))(this, allocator, scriptStruct);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_ISVALID_OFFSET))(this);
		}

		::System::Void* get_Memory()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_MEMORY_OFFSET))(this);
		}

		::System::IntPtr get_Pointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_POINTER_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_ScriptStruct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_SCRIPTSTRUCT_OFFSET))(this);
		}

		::UnrealTypes::FInstancedStruct DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedStruct CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedStruct MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FInstancedStruct& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::UnrealTypes::FInstancedStruct& temp)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_RESET_OFFSET))(this);
		}

		::System::Void SetStructData(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> typeInfo, ::System::IntPtr memory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_OFFSET))(this, typeInfo, memory);
		}

		::System::Void SetStructData_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> structHandle, ::System::Void* memory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_SETSTRUCTDATA_1_OFFSET))(this, structHandle, memory);
		}

		::System::Void ResetStructData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_RESETSTRUCTDATA_OFFSET))(this);
		}

		::System::Void InitializeAs(::UnrealTypes::ScriptStruct* inScriptStruct, ::System::IntPtr inStructMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ScriptStruct*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_INITIALIZEAS_OFFSET))(this, inScriptStruct, inStructMemory);
		}

		::System::Void InitializeAs_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> inScriptStruct, ::System::Void* inStructMemory)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_INITIALIZEAS_1_OFFSET))(this, inScriptStruct, inStructMemory);
		}

		/*
		::System::Void Assign(::UnrealTypes::FReadOnlyStructView& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_ASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::UnrealTypes::FReadOnlyStructView MakeReadOnlyView()
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_MAKEREADONLYVIEW_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::UnrealTypes::FInstancedStruct other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FInstancedStruct))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Inequality(::UnrealTypes::FInstancedStruct& lhs, ::UnrealTypes::FInstancedStruct& rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedStruct&, ::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::UnrealTypes::FInstancedStruct Create(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStruct(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_CREATE_OFFSET))(allocator);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FInstancedStruct__CopyAssign(::UnrealTypes::FInstancedStruct& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCT_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDSTRUCT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
