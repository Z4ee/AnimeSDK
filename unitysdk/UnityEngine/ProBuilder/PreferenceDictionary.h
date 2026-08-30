#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EB86F60)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1EB86120)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETBOOLDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F00)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETBOOL_OFFSET UNITYSDK_OFFSET(0x1EB86410)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETCOLORDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F40)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EB86660)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETFLOATDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F20)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EB86520)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETINTDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F10)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETINT_OFFSET UNITYSDK_OFFSET(0x1EB864A0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETMATERIALDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F50)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EB86740)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETSTRINGDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EB86F30)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EB865B0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_HASKEY_OFFSET UNITYSDK_OFFSET(0x1EB85EF0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB85660)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB84BB0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETBOOL_OFFSET UNITYSDK_OFFSET(0x1EB867F0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EB86C50)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1EB85CD0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EB86A30)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETINT_OFFSET UNITYSDK_OFFSET(0x1EB86930)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EB86DC0)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1EB86B40)
#define UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB87120)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PreferenceDictionary_TypeDefinitionIndex = 43193;

	class PreferenceDictionary : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* m_Bool; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_Int; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* m_Float; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_String; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* m_Color; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* m_Material; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* m_Bool_keys; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* m_Int_keys; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* m_Float_keys; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* m_String_keys; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* m_Color_keys; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* m_Material_keys; // 0x70
		::System::Collections::Generic::List_1<::System::Boolean>* m_Bool_values; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* m_Int_values; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* m_Float_values; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* m_String_values; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Color_values; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* m_Material_values; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SetDefaultValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETDEFAULTVALUES_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_HASKEY_OFFSET))(this, a1);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETINT_OFFSET))(this, a1, a2);
		}

		::System::Single GetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::String* GetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETSTRING_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETCOLOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetMaterial(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaterial(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_SETMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* GetBoolDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETBOOLDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GetIntDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETINTDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GetFloatDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETFLOATDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetStringDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETSTRINGDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* GetColorDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETCOLORDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* GetMaterialDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_GETMATERIALDICTIONARY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PREFERENCEDICTIONARY_CLEAR_OFFSET))(this);
		}
	};
}
