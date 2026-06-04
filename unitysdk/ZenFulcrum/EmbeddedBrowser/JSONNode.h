#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/JSONNode_NodeType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1B4FC4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_CHECK_OFFSET UNITYSDK_OFFSET(0x1B4FBD70)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ASJSON_OFFSET UNITYSDK_OFFSET(0x1B4FC7E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B4FC5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B4FC610)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B4FBD60)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B4FC200)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B4FBFE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B4FBD50)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B4FC690)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B4FBF00)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1B4FBED0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B4FBE00)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B4FBE50)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B4FBE80)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1B4FBF60)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1B4FBF90)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1B4FC1D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1B4FC4C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1B4FC620)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1B4FC650)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B4FBDD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1B4DD6C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B4FC2A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B4FC0C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4FC950)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4E0D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4FBD10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B4FBD20)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B4FBD30)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B4FBD40)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FBC40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 36570;

	class JSONNode : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_InvalidNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x64F60);
		}
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_NullNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x64F68);
		}
		::System::String* _stringValue; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _objectValue; // 0x18
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _arrayValue; // 0x20
		::System::Double _numberValue; // 0x28
		::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType _type; // 0x30
		::System::Boolean _boolValue; // 0x34

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* Parse(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET))(a1);
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

		static ::System::String* op_Implicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::String*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_1(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_2(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Int32(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_3(::System::Int32 a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::System::Single op_Explicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Single(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Explicit_1(::System::Single a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_4(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Double(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_5(::System::Double a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_6(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_7(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		::System::Void Add(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit_8(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_9(::System::Boolean a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
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
