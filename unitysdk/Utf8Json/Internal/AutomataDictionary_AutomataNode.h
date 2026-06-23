#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E62AEE0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET UNITYSDK_OFFSET(0x1E62AC60)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1E62B110)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1E62B3A0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET UNITYSDK_OFFSET(0x1E62B570)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1E62B430)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E62ABD0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXTSAFE_OFFSET UNITYSDK_OFFSET(0x1E62B190)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1E62AF10)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E62B3D0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62C980)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62ABE0)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode_TypeDefinitionIndex = 91225;

	class AutomataDictionary_AutomataNode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>** StaticGet_emptyNodes()
		{
			return (::Il2CppArray<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode_TypeDefinitionIndex)->GetStaticField(0x4ED20);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_emptyKeys()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(AutomataDictionary_AutomataNode_TypeDefinitionIndex)->GetStaticField(0x4ED28);
		}
		::Il2CppArray<::System::UInt64>* nextKeys; // 0x10
		::System::String* originalKey; // 0x18
		::Il2CppArray<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>* nexts; // 0x20
		::System::UInt64 Key; // 0x28
		::System::Int32 Value; // 0x30
		::System::Int32 count; // 0x34

		::System::Void _ctor(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET))(this, key);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET))(this);
		}

		::Utf8Json::Internal::AutomataDictionary_AutomataNode* Add(::System::UInt64 key)
		{
			return ((::Utf8Json::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET))(this, key);
		}

		::Utf8Json::Internal::AutomataDictionary_AutomataNode* Add_1(::System::UInt64 key, ::System::Int32 value, ::System::String* originalKey)
		{
			return ((::Utf8Json::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET))(this, key, value, originalKey);
		}

		::Utf8Json::Internal::AutomataDictionary_AutomataNode* SearchNext(::System::Byte*& p, ::System::Int32& rest)
		{
			return ((::Utf8Json::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::Byte*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXT_OFFSET))(this, p, rest);
		}

		::Utf8Json::Internal::AutomataDictionary_AutomataNode* SearchNextSafe(::Il2CppArray<::System::Byte>* p, ::System::Int32& offset, ::System::Int32& rest)
		{
			return ((::Utf8Json::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXTSAFE_OFFSET))(this, p, offset, rest);
		}

		static ::System::Int32 BinarySearch(::Il2CppArray<::System::UInt64>* array, ::System::Int32 index, ::System::Int32 length, ::System::UInt64 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt64>*, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_BINARYSEARCH_OFFSET))(array, index, length, value);
		}

		::System::Int32 CompareTo(::Utf8Json::Internal::AutomataDictionary_AutomataNode* other)
		{
			return ((::System::Int32(*)(::PVOID, ::Utf8Json::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET))(this, other);
		}

		::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>* YieldChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET))(this);
		}

		::System::Void EmitSearchNext(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* p, ::System::Reflection::Emit::LocalBuilder* rest, ::System::Reflection::Emit::LocalBuilder* key, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* onFound, ::System::Action* onNotFound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET))(this, il, p, rest, key, onFound, onNotFound);
		}

		static ::System::Void EmitSearchNextCore(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* p, ::System::Reflection::Emit::LocalBuilder* rest, ::System::Reflection::Emit::LocalBuilder* key, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* onFound, ::System::Action* onNotFound, ::Il2CppArray<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>* nexts, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*, ::Il2CppArray<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET))(il, p, rest, key, onFound, onNotFound, nexts, count);
		}
	};
}
