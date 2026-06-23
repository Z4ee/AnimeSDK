#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }
namespace System::Text { class StringBuilder; }
namespace Utf8Json::Internal { class AutomataDictionary_AutomataNode; }

#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1DF5DFE0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1DF5DF70)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_EMITMATCH_OFFSET UNITYSDK_OFFSET(0x1DF5E9C0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF5E800)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF5E7F0)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TOSTRINGCORE_OFFSET UNITYSDK_OFFSET(0x1DF5E380)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5E290)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TRYGETVALUESAFE_OFFSET UNITYSDK_OFFSET(0x1DF5E200)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY_YIELDCORE_OFFSET UNITYSDK_OFFSET(0x1DF5E960)
#define UTF8JSON_INTERNAL_AUTOMATADICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5DEC0)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int AutomataDictionary_TypeDefinitionIndex = 91224;

	class AutomataDictionary : public ::System::Object
	{
	public:
		::Utf8Json::Internal::AutomataDictionary_AutomataNode* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* str, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_ADD_OFFSET))(this, str, value);
		}

		::System::Void Add_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_ADD_1_OFFSET))(this, bytes, value);
		}

		::System::Boolean TryGetValueSafe(::System::ArraySegment_1<::System::Byte> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TRYGETVALUESAFE_OFFSET))(this, key, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TOSTRING_OFFSET))(this);
		}

		static ::System::Void ToStringCore(::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>* nexts, ::System::Text::StringBuilder* sb, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_TOSTRINGCORE_OFFSET))(nexts, sb, depth);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* YieldCore(::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>* nexts)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::System::Collections::Generic::IEnumerable_1<::Utf8Json::Internal::AutomataDictionary_AutomataNode*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_YIELDCORE_OFFSET))(nexts);
		}

		::System::Void EmitMatch(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* p, ::System::Reflection::Emit::LocalBuilder* rest, ::System::Reflection::Emit::LocalBuilder* key, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* onFound, ::System::Action* onNotFound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_AUTOMATADICTIONARY_EMITMATCH_OFFSET))(this, il, p, rest, key, onFound, onNotFound);
		}
	};
}
