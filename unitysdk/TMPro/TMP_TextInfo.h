#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/TMPro/TMP_CharacterInfo.h"
#include "unitysdk/TMPro/TMP_LineInfo.h"
#include "unitysdk/TMPro/TMP_LinkInfo.h"
#include "unitysdk/TMPro/TMP_MeshInfo.h"
#include "unitysdk/TMPro/TMP_PageInfo.h"
#include "unitysdk/TMPro/TMP_WordInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0x1B1F5BB0)
#define TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET UNITYSDK_OFFSET(0x1B1F5CC0)
#define TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET UNITYSDK_OFFSET(0x1B1F5DB0)
#define TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET UNITYSDK_OFFSET(0x1B1F5C50)
#define TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET UNITYSDK_OFFSET(0x1B1F5F20)
#define TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1B1F5D20)
#define TMPRO_TMP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B1F5AF0)
#define TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1B1F5FF0)
#define TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B1DCE00)
#define TMPRO_TMP_TEXTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1F6410)
#define TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1F5990)
#define TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B1F5A20)
#define TMPRO_TMP_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F5900)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextInfo_TypeDefinitionIndex = 41047;

	class TMP_TextInfo : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorPositive()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x11E80);
		}
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorNegative()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x11E88);
		}
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 characterCount; // 0x18
		::System::Int32 spriteCount; // 0x1C
		::System::Int32 spaceCount; // 0x20
		::System::Int32 wordCount; // 0x24
		::System::Int32 linkCount; // 0x28
		::System::Int32 lineCount; // 0x2C
		::System::Int32 pageCount; // 0x30
		::System::Int32 materialCount; // 0x34
		::Il2CppArray<::TMPro::TMP_CharacterInfo>* characterInfo; // 0x38
		::Il2CppArray<::TMPro::TMP_WordInfo>* wordInfo; // 0x40
		::Il2CppArray<::TMPro::TMP_LinkInfo>* linkInfo; // 0x48
		::Il2CppArray<::TMPro::TMP_LineInfo>* lineInfo; // 0x50
		::Il2CppArray<::TMPro::TMP_PageInfo>* pageInfo; // 0x58
		::Il2CppArray<::TMPro::TMP_MeshInfo>* meshInfo; // 0x60
		::Il2CppArray<::TMPro::TMP_MeshInfo>* m_CachedMeshInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::TMPro::TMP_Text* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ClearAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET))(this);
		}

		::System::Void ClearMeshInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET))(this, a1);
		}

		::System::Void ClearAllMeshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET))(this);
		}

		::System::Void ResetVertexLayout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET))(this, a1);
		}

		::System::Void ClearUnusedVertices(::Il2CppArray<::TMPro::MaterialReference>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TMPro::MaterialReference>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET))(this, a1);
		}

		::System::Void ClearLineInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET))(this);
		}

		::System::Void ClearPageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET))(this);
		}

		::Il2CppArray<::TMPro::TMP_MeshInfo>* CopyMeshInfoVertexData()
		{
			return ((::Il2CppArray<::TMPro::TMP_MeshInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET))(this);
		}
	};
}
