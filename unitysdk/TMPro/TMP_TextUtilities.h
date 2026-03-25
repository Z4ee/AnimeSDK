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

#define TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET UNITYSDK_OFFSET(0x189685A0)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x18968920)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET UNITYSDK_OFFSET(0x1896AB10)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET UNITYSDK_OFFSET(0x1896AD60)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET UNITYSDK_OFFSET(0x18968DB0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET UNITYSDK_OFFSET(0x189679F0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET UNITYSDK_OFFSET(0x18966540)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET UNITYSDK_OFFSET(0x18967740)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET UNITYSDK_OFFSET(0x1896B440)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET UNITYSDK_OFFSET(0x18969800)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET UNITYSDK_OFFSET(0x189673E0)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x189662A0)
#define TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1896CF00)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET UNITYSDK_OFFSET(0x1896D0B0)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1896CFD0)
#define TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1896D1B0)
#define TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET UNITYSDK_OFFSET(0x1896CD20)
#define TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18968740)
#define TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET UNITYSDK_OFFSET(0x189684B0)
#define TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x18966FA0)
#define TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET UNITYSDK_OFFSET(0x1896D1D0)
#define TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET UNITYSDK_OFFSET(0x1896CE70)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0x1894FB20)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET UNITYSDK_OFFSET(0x1896CED0)
#define TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1896D2C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_TypeDefinitionIndex = 34407;

	class TMP_TextUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_m_rectWorldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TMP_TextUtilities_TypeDefinitionIndex)->GetStaticField(0x2F660);
		}
		// static const ::System::String* k_lookupStringL; // 0x0
		// static const ::System::String* k_lookupStringU; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET))(textComponent, position, camera);
		}

		static ::System::Int32 GetCursorIndexFromPosition_1(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, ::TMPro::CaretPosition& cursor)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::TMPro::CaretPosition&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET))(textComponent, position, camera, cursor);
		}

		static ::System::Int32 FindNearestLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET))(text, position, camera);
		}

		static ::System::Int32 FindNearestCharacterOnLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::System::Int32 line, ::UnityEngine::Camera* camera, ::System::Boolean visibleOnly)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET))(text, position, line, camera, visibleOnly);
		}

		static ::System::Boolean IsIntersectingRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET))(rectTransform, position, camera);
		}

		static ::System::Int32 FindIntersectingCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, ::System::Boolean visibleOnly)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET))(text, position, camera, visibleOnly);
		}

		static ::System::Int32 FindNearestCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, ::System::Boolean visibleOnly)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET))(text, position, camera, visibleOnly);
		}

		static ::System::Int32 FindIntersectingWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET))(text, position, camera);
		}

		static ::System::Int32 FindNearestWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET))(text, position, camera);
		}

		static ::System::Int32 FindIntersectingLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET))(text, position, camera);
		}

		static ::System::Int32 FindIntersectingLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET))(text, position, camera);
		}

		static ::System::Int32 FindNearestLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET))(text, position, camera);
		}

		static ::System::Boolean PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET))(m, a, b, c, d);
		}

		static ::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* transform, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3& worldPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(transform, screenPoint, cam, worldPoint);
		}

		static ::System::Boolean IntersectLinePlane(::TMPro::TMP_TextUtilities_LineSegment line, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3& intersectingPoint)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_TextUtilities_LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET))(line, point, normal, intersectingPoint);
		}

		static ::System::Single DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET))(a, b, point);
		}

		static ::System::Char ToLowerFast(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET))(c);
		}

		static ::System::Char ToUpperFast(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET))(c);
		}

		static ::System::UInt32 ToUpperASCIIFast(::System::UInt32 c)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET))(c);
		}

		static ::System::Int32 GetHashCode(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET))(s);
		}

		static ::System::Int32 GetSimpleHashCode(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET))(s);
		}

		static ::System::UInt32 GetSimpleHashCodeLowercase(::System::String* s)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET))(s);
		}

		static ::System::Int32 HexToInt(::System::Char hex)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET))(hex);
		}

		static ::System::Int32 StringHexToInt(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET))(s);
		}
	};
}
