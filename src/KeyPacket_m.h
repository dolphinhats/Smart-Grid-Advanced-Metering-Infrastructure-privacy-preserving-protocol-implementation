//
// Generated file, do not edit! Created by nedtool 5.0 from KeyPacket.msg.
//

#ifndef __SMART3P_KEYPACKET_M_H
#define __SMART3P_KEYPACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace smart3p {

/**
 * Class generated from <tt>KeyPacket.msg:6</tt> by nedtool.
 * <pre>
 * //
 * // Key Packet
 * //
 * packet KeyPacket
 * {
 *     int id;
 *     double value;
 *     int smGateID;
 *     int collGateID;
 *     int pieceSize;
 *     string pieceBytes;
 *     int partialSize;
 *     string partialBytes;
 * 
 * 
 * }
 * </pre>
 */
class KeyPacket : public ::omnetpp::cPacket
{
  protected:
    int id;
    double value;
    int smGateID;
    int collGateID;
    int pieceSize;
    ::omnetpp::opp_string pieceBytes;
    int partialSize;
    ::omnetpp::opp_string partialBytes;

  private:
    void copy(const KeyPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KeyPacket&);

  public:
    KeyPacket(const char *name=nullptr, int kind=0);
    KeyPacket(const KeyPacket& other);
    virtual ~KeyPacket();
    KeyPacket& operator=(const KeyPacket& other);
    virtual KeyPacket *dup() const {return new KeyPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getId() const;
    virtual void setId(int id);
    virtual double getValue() const;
    virtual void setValue(double value);
    virtual int getSmGateID() const;
    virtual void setSmGateID(int smGateID);
    virtual int getCollGateID() const;
    virtual void setCollGateID(int collGateID);
    virtual int getPieceSize() const;
    virtual void setPieceSize(int pieceSize);
    virtual const char * getPieceBytes() const;
    virtual void setPieceBytes(const char * pieceBytes);
    virtual int getPartialSize() const;
    virtual void setPartialSize(int partialSize);
    virtual const char * getPartialBytes() const;
    virtual void setPartialBytes(const char * partialBytes);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KeyPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KeyPacket& obj) {obj.parsimUnpack(b);}

} // namespace smart3p

#endif // ifndef __SMART3P_KEYPACKET_M_H
