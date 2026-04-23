#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/JSONNode_NodeType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1A6C07F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_CHECK_OFFSET UNITYSDK_OFFSET(0x1A6C00B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ASJSON_OFFSET UNITYSDK_OFFSET(0x1A6C0A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A6C0870)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1A6C08C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A6C00A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A6C0540)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A6C0320)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A6C0090)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A6C0940)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A6C0240)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1A6C0210)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A6C0140)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A6C0190)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A6C01C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1A6C02A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1A6C02D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1A6C0510)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1A6C07C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1A6C08D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1A6C0900)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A6C0110)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1A6937B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A6C05D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A6C0400)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6C0C00)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A69AEB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6C0050)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A6C0060)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A6C0070)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A6C0080)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BFF80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 36270;

	class JSONNode : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_InvalidNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x69F90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_NullNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x69F98);
		}
		::System::String* _stringValue; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _objectValue; // 0x18
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _arrayValue; // 0x20
		::System::Double _numberValue; // 0x28
		::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType _type; // 0x30
		::System::Boolean _boolValue; // 0x34

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType type)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* Parse(::System::String* json)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET))(json);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType get_Type()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISVALID_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* Check()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_CHECK_OFFSET))(this);
		}

		static ::System::String* op_Implicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::String*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET))(n);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_1(::System::String* v)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET))(v);
		}

		static ::System::Int32 op_Implicit_2(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Int32(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET))(n);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_3(::System::Int32 v)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET))(v);
		}

		static ::System::Single op_Explicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Single(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET))(n);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Explicit_1(::System::Single v)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET))(v);
		}

		static ::System::Double op_Implicit_4(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Double(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET))(n);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_5(::System::Double v)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET))(v);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item(::System::String* k)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET))(this, k);
		}

		::System::Void set_Item(::System::String* k, ::ZenFulcrum::EmbeddedBrowser::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET))(this, k, value);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_6(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET))(n);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item_1(::System::Int32 idx)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET))(this, idx);
		}

		::System::Void set_Item_1(::System::Int32 idx, ::ZenFulcrum::EmbeddedBrowser::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET))(this, idx, value);
		}

		static ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_7(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET))(n);
		}

		::System::Void Add(::ZenFulcrum::EmbeddedBrowser::JSONNode* item)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET))(this, item);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit_8(::ZenFulcrum::EmbeddedBrowser::JSONNode* n)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET))(n);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_9(::System::Boolean v)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET))(v);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_AsJSON()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ASJSON_OFFSET))(this);
		}
	};
}
