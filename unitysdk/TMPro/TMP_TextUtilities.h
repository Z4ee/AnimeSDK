#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/CaretPosition.h"
#include "unitysdk/TMPro/TMP_TextUtilities_LineSegment.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET UNITYSDK_OFFSET(0x12411320)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x12411660)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET UNITYSDK_OFFSET(0x124137E0)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET UNITYSDK_OFFSET(0x12413A30)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET UNITYSDK_OFFSET(0x12411AD0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET UNITYSDK_OFFSET(0x124107A0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1240F340)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET UNITYSDK_OFFSET(0x12410500)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET UNITYSDK_OFFSET(0x124140E0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET UNITYSDK_OFFSET(0x124124F0)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET UNITYSDK_OFFSET(0x124101C0)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1240F0B0)
#define TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12415B80)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET UNITYSDK_OFFSET(0x12415D30)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET UNITYSDK_OFFSET(0x12415C50)
#define TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x12415E30)
#define TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET UNITYSDK_OFFSET(0x124159A0)
#define TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x124114C0)
#define TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET UNITYSDK_OFFSET(0x12411230)
#define TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1240FD90)
#define TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET UNITYSDK_OFFSET(0x12415E50)
#define TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET UNITYSDK_OFFSET(0x12415AF0)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0x123FAC60)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET UNITYSDK_OFFSET(0x12415B50)
#define TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x12415F40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_TypeDefinitionIndex = 41868;

	class TMP_TextUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_m_rectWorldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TMP_TextUtilities_TypeDefinitionIndex)->GetStaticField(0x596F0);
		}
		// static const ::System::String* k_lookupStringL; // 0x0
		// static const ::System::String* k_lookupStringU; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCursorIndexFromPosition(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetCursorIndexFromPosition_1(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::TMPro::CaretPosition& a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::TMPro::CaretPosition&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindNearestLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestCharacterOnLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::Camera* a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsIntersectingRectTransform(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingCharacter(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindNearestCharacter(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindIntersectingWord(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestWord(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingLink(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestLink(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PointIntersectRectangle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IntersectLinePlane(::TMPro::TMP_TextUtilities_LineSegment a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_TextUtilities_LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single DistanceToLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Char ToLowerFast(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET))(a1);
		}

		static ::System::Char ToUpperFast(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET))(a1);
		}

		static ::System::UInt32 ToUpperASCIIFast(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET))(a1);
		}

		static ::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET))(a1);
		}

		static ::System::Int32 GetSimpleHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET))(a1);
		}

		static ::System::UInt32 GetSimpleHashCodeLowercase(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET))(a1);
		}

		static ::System::Int32 HexToInt(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET))(a1);
		}

		static ::System::Int32 StringHexToInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET))(a1);
		}
	};
}
