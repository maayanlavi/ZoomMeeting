#include "ZoomMeeting.h"
#include "Host.h"
#include "Regular.h"

/*----------------------------------------------------------------------------*/
ZoomMeeting::ZoomMeeting(
	const string& name,
    const string& date,
    const string& startTime,
    const string& endTime,
	const string& id,
	int numOfParticipants,
	Participant** participants)
	:	
	m_name(name),
	m_date(date),
	m_startTime(startTime),
	m_endTime(endTime),
	m_Id(id),
	m_numOfParticipants(numOfParticipants)
{
	for (int i = 0; i < m_numOfParticipants; ++i)
	{
		m_participants.at(i) = participants[i];
	}


}
/*----------------------------------------------------------------------------*/
void ZoomMeeting::cleanParticipants()
{
	/*TODO - ADD YOUR CODE*/
}
/*----------------------------------------------------------------------------*/
ZoomMeeting::~ZoomMeeting()
{
    cleanParticipants();
}
/*----------------------------------------------------------------------------*/
void ZoomMeeting::read(istream &in)
{
	/*TODO - ADD YOUR CODE*/
}
/*----------------------------------------------------------------------------*/
Participant* ZoomMeeting::readParticipant(istream &in)
{
	/*TODO - ADD YOUR CODE*/
}
/*----------------------------------------------------------------------------*/
void ZoomMeeting::write(ostream& out) const
{
	/*TODO - ADD YOUR CODE*/
}
/*----------------------------------------------------------------------------*/
istream& operator >> (istream& in, ZoomMeeting& zoomMeeting)
{
	zoomMeeting.read(in);
    return in;
}
/*----------------------------------------------------------------------------*/
ostream& operator << (ostream& out, const ZoomMeeting& zoomMeeting)
{
	zoomMeeting.write(out);
    return out;
}
/*----------------------------------------------------------------------------*/